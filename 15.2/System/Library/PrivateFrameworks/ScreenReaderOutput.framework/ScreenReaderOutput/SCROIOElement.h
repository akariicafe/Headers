@class NSString;

@interface SCROIOElement : NSObject <SCROIOElementProtocol, NSCopying> {
    unsigned int _ioObject;
}

@property (nonatomic) int identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithIOObject:(unsigned int)a0;
- (int)transport;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned int)ioObject;

@end
