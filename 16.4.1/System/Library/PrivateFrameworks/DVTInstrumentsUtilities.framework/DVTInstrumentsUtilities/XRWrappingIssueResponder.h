@class NSString, NSError;
@protocol XRIssueResponder;

@interface XRWrappingIssueResponder : NSObject <XRIssueResponder> {
    NSError *_prototype;
    id<XRIssueResponder> _nextResponder;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
