@class NSData, NSString;

@interface AMDDescriptor : NSManagedObject

@property (retain, nonatomic) NSData *descriptor;
@property (nonatomic) short domain;
@property (copy, nonatomic) NSString *featureName;

+ (id)fetchRequest;
+ (id)deleteAll:(id *)a0;
+ (id)refreshDescriptors:(id)a0 forDomain:(long long)a1 error:(id *)a2;
+ (id)getDescriptorsForDomain:(long long)a0 error:(id *)a1;

@end
