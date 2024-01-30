@interface HSPlayStatusUpdateRequest : HSRequest

@property (readonly, nonatomic) unsigned int interfaceID;
@property (readonly, nonatomic) unsigned int revisionID;

- (double)timeoutInterval;
- (BOOL)isConcurrent;
- (id)initWithInterfaceID:(unsigned int)a0 revisionID:(unsigned int)a1;
- (id)canonicalResponseForResponse:(id)a0;

@end
