@class NSString;

@interface ECMessageFlagChange : NSObject <ECMessageFlagChangeBuilder, EFPubliclyDescribable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL read;
@property (nonatomic) BOOL deleted;
@property (nonatomic) BOOL replied;
@property (nonatomic) BOOL flagged;
@property (nonatomic) BOOL draft;
@property (nonatomic) BOOL forwarded;
@property (nonatomic) BOOL redirected;
@property (nonatomic) BOOL junkLevelSetByUser;
@property (nonatomic) unsigned long long junkLevel;
@property (nonatomic) unsigned long long flagColor;
@property (nonatomic) long long reason;
@property (nonatomic) BOOL readChanged;
@property (nonatomic) BOOL deletedChanged;
@property (nonatomic) BOOL repliedChanged;
@property (nonatomic) BOOL flaggedChanged;
@property (nonatomic) BOOL draftChanged;
@property (nonatomic) BOOL forwardedChanged;
@property (nonatomic) BOOL redirectedChanged;
@property (nonatomic) BOOL junkLevelSetByUserChanged;
@property (nonatomic) BOOL junkLevelChanged;
@property (nonatomic) BOOL flagColorChanged;
@property (readonly, nonatomic) BOOL hasChanges;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)changeFrom:(id)a0 to:(id)a1;
+ (id)setRead;
+ (id)clearRead;
+ (id)clearFlagged;
+ (id)setFlagged;
+ (id)setReplied;
+ (id)setForwarded;
+ (id)setDeleted;

- (void)encodeWithCoder:(id)a0;
- (id)initWithBuilder:(id /* block */)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)changesReadTo:(BOOL)a0;
- (void)changesDeletedTo:(BOOL)a0;
- (void)changesRepliedTo:(BOOL)a0;
- (void)changesFlaggedTo:(BOOL)a0;
- (void)changesFlagColorTo:(unsigned long long)a0;
- (void)changesForwardedTo:(BOOL)a0;
- (void)changesRedirectedTo:(BOOL)a0;
- (void)changesJunkLevelTo:(unsigned long long)a0;
- (id)flagsAfterChangingFlags:(id)a0 flagsWereChanged:(BOOL *)a1;
- (void)changesDraftTo:(BOOL)a0;
- (void)changesJunkLevelSetByUserTo:(BOOL)a0;

@end
