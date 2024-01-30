@class NSArray, NSString;

@interface CalVirtualConference : NSObject

@property (readonly, nonatomic) unsigned long long source;
@property (readonly, nonatomic) BOOL isWritable;
@property (readonly, nonatomic) NSArray *joinMethods;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *conferenceDetails;

- (id)description;
- (id)initWithTitle:(id)a0 joinMethods:(id)a1 conferenceDetails:(id)a2 source:(unsigned long long)a3 isWritable:(BOOL)a4;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
