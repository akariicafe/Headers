@class NSArray;

@interface ICURLBagMescalConfiguration : NSObject

@property (nonatomic) BOOL shouldSignBody;
@property (copy, nonatomic) NSArray *fields;
@property (copy, nonatomic) NSArray *headers;

- (void).cxx_destruct;
- (id)description;

@end
