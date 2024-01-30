@class NSString;

@interface SiriRequestDispatcher.RequestMessageBase : SiriRequestDispatcher.SessionMessageBase {
    void /* unknown type, empty encoding */ requestId;
}

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;

@end
