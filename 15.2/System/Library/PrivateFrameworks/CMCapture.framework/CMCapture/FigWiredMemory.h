@interface FigWiredMemory : NSObject {
    unsigned long long _roundedLength;
    BOOL _isWired;
}

@property (readonly, nonatomic) void *bytes;
@property (readonly, nonatomic) unsigned long long length;

+ (void)initialize;

- (id)initWithLength:(unsigned long long)a0;
- (void)dealloc;

@end
