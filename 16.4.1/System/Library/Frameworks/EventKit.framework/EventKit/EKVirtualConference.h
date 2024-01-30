@class NSString, NSArray, NSURL;

@interface EKVirtualConference : NSObject <NSCopying>

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSArray *joinMethods;
@property (retain, nonatomic) NSString *conferenceDetails;
@property (retain, nonatomic) NSString *serializationBlockTitle;
@property (readonly, nonatomic) BOOL isWritable;
@property (nonatomic) unsigned long long source;
@property (readonly, nonatomic) NSURL *firstPhoneNumber;
@property (readonly, nonatomic) NSURL *urlWithAllowedScheme;

+ (void)virtualConferenceForRoomType:(id)a0 completion:(id /* block */)a1 queue:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 joinMethods:(id)a1 conferenceDetails:(id)a2;

@end
