@class NSString;

@interface NWBonjourServiceEndpoint : NWEndpoint

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSString *domain;

+ (id)endpointWithName:(id)a0 type:(id)a1 domain:(id)a2;
+ (unsigned int)endpointType;

- (id)descriptionWithIndent:(int)a0 showFullContent:(BOOL)a1;

@end
