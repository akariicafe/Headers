@class NSString, NSNumber;

@interface EDAMPublishing : FATObject

@property (retain, nonatomic) NSString *uri;
@property (retain, nonatomic) NSNumber *order;
@property (retain, nonatomic) NSNumber *ascending;
@property (retain, nonatomic) NSString *publicDescription;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
