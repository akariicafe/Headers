@class NSString, NSArray, NSDictionary, NSNumber;

@interface DEResult : NSObject

@property (retain, nonatomic) NSString *status;
@property (retain, nonatomic) NSString *error;
@property (retain, nonatomic) NSArray *response;
@property (retain, nonatomic) NSArray *visualRefs;
@property (retain, nonatomic) NSDictionary *meta;
@property (retain, nonatomic) NSNumber *elapsedTimeMs;
@property (retain, nonatomic) NSNumber *elapsedTimeThreadMs;
@property (retain, nonatomic) NSString *json;

- (void).cxx_destruct;
- (id)initFromJson:(id)a0;

@end
