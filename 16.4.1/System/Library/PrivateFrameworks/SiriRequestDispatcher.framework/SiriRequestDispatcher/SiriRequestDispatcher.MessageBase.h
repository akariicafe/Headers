@class NSString;

@interface SiriRequestDispatcher.MessageBase : NSObject {
    void /* unknown type, empty encoding */ messageId;
    void /* unknown type, empty encoding */ postedOnTheBus;
    void /* unknown type, empty encoding */ source;
    void /* unknown type, empty encoding */ assistantId;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;

@end
