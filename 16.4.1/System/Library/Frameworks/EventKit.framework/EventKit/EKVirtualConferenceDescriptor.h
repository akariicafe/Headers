@class NSString, NSArray;

@interface EKVirtualConferenceDescriptor : NSObject

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSArray *URLDescriptors;
@property (readonly, copy, nonatomic) NSString *conferenceDetails;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 URLDescriptors:(id)a1 conferenceDetails:(id)a2;

@end
