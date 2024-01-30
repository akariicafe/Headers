@class NSArray;

@interface SGDataDetectorMatchesWithSignatureRange : NSObject

@property (retain, nonatomic) NSArray *matches;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } signatureRange;

- (void).cxx_destruct;

@end
