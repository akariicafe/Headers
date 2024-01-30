@class NSString, NSData, _MRPlaybackSessionRequestProtobuf;

@interface MRPlaybackSessionRequest : NSObject

@property (readonly, nonatomic) _MRPlaybackSessionRequestProtobuf *protobuf;
@property (copy, nonatomic) NSString *requestIdentifier;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) unsigned long long location;
@property (nonatomic) BOOL hasLocation;
@property (nonatomic) unsigned long long length;
@property (nonatomic) BOOL hasLength;
@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } range;

- (id)initWithProtobuf:(id)a0;
- (id)initWithData:(id)a0;
- (id)description;
- (id)initWithIdentifier:(id)a0 type:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithIdentifier:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
