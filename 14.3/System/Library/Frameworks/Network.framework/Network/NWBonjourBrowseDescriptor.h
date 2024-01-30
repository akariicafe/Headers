@class NSString;

@interface NWBonjourBrowseDescriptor : NWBrowseDescriptor

@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSString *domain;

+ (unsigned int)descriptorType;
+ (id)descriptorWithType:(id)a0 domain:(id)a1;

- (id)descriptionWithIndent:(int)a0 showFullContent:(BOOL)a1;

@end
