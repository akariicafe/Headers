@class NSString, NSDate;

@interface IMMomentShareStatusChatItem : IMTranscriptChatItem

@property (readonly, copy, nonatomic) NSString *activityTitle;
@property (readonly, copy, nonatomic) NSDate *expirationDate;

+ (id)_guidForItem:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isFromMe;
- (BOOL)wouldBeEqualIfInitializedWithItem:(id)a0 activityTitle:(id)a1 expirationDate:(id)a2;
- (id)_initWithItem:(id)a0 activityTitle:(id)a1 expirationDate:(id)a2;
- (BOOL)_isEqualToGuid:(id)a0 activityTitle:(id)a1 expirationDate:(id)a2;

@end
