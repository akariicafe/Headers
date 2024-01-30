@class NSString, DUGlobalTopicSetIdentifierObjC, _TtC21DocumentUnderstanding13DUTopicResult;

@interface DUTopicResultObjC : NSObject {
    _TtC21DocumentUnderstanding13DUTopicResult *_underlying;
}

@property (copy, nonatomic) DUGlobalTopicSetIdentifierObjC *topicSet;
@property (copy, nonatomic) NSString *topicIdentifier;
@property (nonatomic) double topicConfidence;

- (id)init;
- (void).cxx_destruct;

@end
