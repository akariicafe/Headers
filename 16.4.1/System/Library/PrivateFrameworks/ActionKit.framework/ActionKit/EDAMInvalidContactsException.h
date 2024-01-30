@class NSArray, NSString;

@interface EDAMInvalidContactsException : FATException

@property (retain, nonatomic) NSArray *contacts;
@property (retain, nonatomic) NSString *parameter;
@property (retain, nonatomic) NSArray *reasons;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
