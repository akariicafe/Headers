@class NSString, NSSet, NSData;

@interface MRPlayer : NSObject <NSCopying>

@property (class, readonly, nonatomic) MRPlayer *anyPlayer;
@property (class, readonly, nonatomic) MRPlayer *defaultPlayer;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *displayName;
@property (nonatomic) long long audioSessionType;
@property (copy, nonatomic) NSSet *mxSessionIDs;
@property (readonly, nonatomic) BOOL hasAuxiliaryProperties;
@property (readonly, nonatomic) MRPlayer *skeleton;
@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, nonatomic, getter=isDefaultPlayer) BOOL defaultPlayer;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (id)description;
- (id)initWithIdentifier:(id)a0 displayName:(id)a1;
- (BOOL)isEqual:(id)a0;

@end
