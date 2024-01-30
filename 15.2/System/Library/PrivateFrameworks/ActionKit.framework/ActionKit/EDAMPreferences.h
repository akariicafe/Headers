@class NSNumber, NSDictionary;

@interface EDAMPreferences : FATObject

@property (retain, nonatomic) NSNumber *updateSequenceNum;
@property (retain, nonatomic) NSDictionary *preferences;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
