@class NSString;

@interface SCROIOElement : NSObject <SCROIOElementProtocol, NSCopying> {
    unsigned int _ioObject;
    int _identifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (int)transport;
- (id)initWithIOObject:(unsigned int)a0;
- (BOOL)isEqual:(id)a0;
- (int)identifier;
- (unsigned int)ioObject;

@end
