@class NSString;

@interface _PSFeedbackMetricsEventInternal : NSObject {
    void /* unknown type, empty encoding */ id;
    void /* unknown type, empty encoding */ engagedSuggestionId;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *id;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ type;
@property (nonatomic, readonly) NSString *engagedSuggestionId;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ airdropOptionPresent;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ visiblePeopleSuggestionCount;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ visibleAppSuggestionCount;

- (id)init;
- (void).cxx_destruct;
- (id)initWithId:(id)a0 type:(long long)a1 engagedSuggestionId:(id)a2 airdropOptionPresent:(BOOL)a3 visiblePeopleSuggestionCount:(unsigned char)a4 visibleAppSuggestionCount:(unsigned char)a5;

@end
