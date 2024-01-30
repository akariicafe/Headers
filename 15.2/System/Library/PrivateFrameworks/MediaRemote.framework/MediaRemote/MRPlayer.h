@class NSString, NSSet, NSURL, NSData;

@interface MRPlayer : NSObject <NSCopying>

@property (class, readonly, nonatomic) MRPlayer *anyPlayer;
@property (class, readonly, nonatomic) MRPlayer *defaultPlayer;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSURL *appIcon;
@property (nonatomic) long long audioSessionType;
@property (copy, nonatomic) NSSet *mxSessionIDs;
@property (nonatomic) unsigned int audioSessionID;
@property (readonly, nonatomic) BOOL hasAuxiliaryProperties;
@property (readonly, nonatomic) MRPlayer *skeleton;
@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, nonatomic, getter=isDefaultPlayer) BOOL defaultPlayer;

- (id)initWithData:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithIdentifier:(id)a0 displayName:(id)a1;

@end
