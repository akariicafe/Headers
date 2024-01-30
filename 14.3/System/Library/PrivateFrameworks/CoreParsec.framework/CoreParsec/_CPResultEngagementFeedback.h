@class NSString, NSDictionary, _CPSearchResultForFeedback, NSData;

@interface _CPResultEngagementFeedback : PBCodable <_CPProcessableFeedback, _CPResultEngagementFeedback, NSSecureCoding> {
    unsigned long long _timestamp;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) id feedbackJSON;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL actionEngaged;
@property (nonatomic) int triggerEvent;
@property (nonatomic) int destination;
@property (nonatomic) int actionTarget;
@property (retain, nonatomic) _CPSearchResultForFeedback *result;
@property (copy, nonatomic) NSString *titleText;
@property (nonatomic) BOOL matchesUnengagedSuggestion;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
