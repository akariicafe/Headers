@class NSString;

@interface TSBridgedFeedArticleContext : NSObject {
    void /* unknown type, empty encoding */ groupID;
    void /* unknown type, empty encoding */ curatedBatchID;
}

@property (nonatomic, readonly) NSString *groupID;
@property (nonatomic, readonly) NSString *curatedBatchID;

- (id)init;
- (void).cxx_destruct;

@end
