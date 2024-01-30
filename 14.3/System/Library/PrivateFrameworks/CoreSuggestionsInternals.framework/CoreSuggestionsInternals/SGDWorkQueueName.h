@interface SGDWorkQueueName : NSObject <NSCopying> {
    unsigned int _timestamp32;
    unsigned int _counter32;
    unsigned short _otherbits;
}

@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned long long counter;
@property (nonatomic) unsigned long long fails;
@property (nonatomic) unsigned long long state;

+ (BOOL)isValidFilename:(id)a0;

- (id)initWithPath:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)queueItemId;
- (id)copyWithState:(unsigned long long)a0;
- (id)pathInDirectory:(id)a0;
- (id)copyWithState:(unsigned long long)a0 andFails:(unsigned long long)a1;

@end
