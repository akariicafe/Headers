@class NSString, NSDictionary;

@interface RKResponse : NSObject

@property (retain) NSString *string;
@property (retain) NSDictionary *attributes;
@property (retain) NSString *category;

- (void).cxx_destruct;
- (id)initWithString:(id)a0 attributes:(id)a1 category:(id)a2;

@end
