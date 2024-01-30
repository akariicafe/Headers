@class NSString, ATXUnifiedInferredActivityTransition, NSObject;
@protocol ATXTimedEventProtocol;

@interface ATXModeBiomeEventContextWrapper : NSObject <ATXTimedEventProtocol, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) ATXUnifiedInferredActivityTransition *mostRecentModeTransition;
@property (retain, nonatomic) NSObject<ATXTimedEventProtocol> *wrappedEvent;
@property (readonly, nonatomic) unsigned long long currentActivityType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)wrapEventStream:(id)a0 modeTransitionStream:(id)a1 startingContext:(id)a2;
+ (id)wrapEventStreams:(id)a0 modeTransitionStream:(id)a1 startingContext:(id)a2;

- (id)initWithData:(id)a0;
- (id)initWithPath:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)eventTime;
- (id)initWithCoder:(id)a0;
- (BOOL)_fileExistsAtPath:(id)a0;
- (id)_dataFromPath:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)serialize:(id *)a0;
- (id)initWithPreviousContext:(id)a0 nextEvent:(id)a1;
- (id)initWithTransitionEvent:(id)a0 eventToWrap:(id)a1;
- (void)persistToPath:(id)a0;

@end
