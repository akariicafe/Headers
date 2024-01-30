@interface HSPlayStatusUpdateRequest : HSRequest

@property (readonly, nonatomic) unsigned int interfaceID;
@property (readonly, nonatomic) unsigned int revisionID;

- (BOOL)isConcurrent;
- (double)timeoutInterval;
- (id)canonicalResponseForResponse:(id)a0;
- (id)initWithInterfaceID:(unsigned int)a0 revisionID:(unsigned int)a1;

@end
