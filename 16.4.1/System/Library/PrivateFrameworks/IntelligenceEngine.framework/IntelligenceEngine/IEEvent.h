@class NSString, NSDictionary, NSArray, IENLParameters;

@interface IEEvent : NSObject

@property (retain, nonatomic) NSString *eventId;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSDictionary *slots;
@property (retain, nonatomic) NSArray *parsers;
@property (retain, nonatomic) IENLParameters *producer;

- (id)initWithName:(id)a0;
- (id)initWithId:(id)a0;
- (void).cxx_destruct;
- (id)initWithId:(id)a0 withName:(id)a1;
- (id)initWithName:(id)a0 withId:(id)a1;

@end
