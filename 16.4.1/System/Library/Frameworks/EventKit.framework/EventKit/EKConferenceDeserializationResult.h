@class EKVirtualConference;

@interface EKConferenceDeserializationResult : NSObject

@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (readonly, nonatomic) EKVirtualConference *conference;

- (void).cxx_destruct;
- (id)initWithConference:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
