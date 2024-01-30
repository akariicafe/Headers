@class NSString;

@interface NTParsecTodayResultsFetchDescriptor : NSObject <NTTodayResultsFetchDescriptor>

@property (readonly, copy, nonatomic) NSString *sourceIdentifier;
@property (readonly, nonatomic) Class descriptorsOperationClass;
@property (readonly, nonatomic) Class fetchOperationClass;

- (id)init;
- (id)placeholderSectionDescriptorsWithContentRequest:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
