@class STGenericIntentRequest, NSMutableDictionary, NSString, AFSiriTask;

@interface STGenericIntent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *parameters;
@property (retain, nonatomic) AFSiriTask *siriTask;
@property (retain, nonatomic) STGenericIntentRequest *intentRequest;
@property (nonatomic) BOOL handled;
@property (nonatomic) BOOL finishedState;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *utterance;
@property (copy, nonatomic) NSString *attributes;
@property (nonatomic) BOOL appInForeground;
@property (nonatomic) BOOL isLaunch;

- (void)finished;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)handleWithProgress:(long long)a0;
- (id)getDateRangeParameter:(id)a0;
- (id)getTopicParameter:(id)a0;
- (id)getPersonParameter:(id)a0;
- (id)getGroupParameter:(id)a0;
- (id)getPlacesParameter:(id)a0;
- (void)addParam:(id)a0 withValue:(id)a1;

@end
