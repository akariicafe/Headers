@class NSString, NSUUID;

@interface PKHashtagItem : PKDetectionItem

@property (readonly, nonatomic) NSString *hashtagResult;
@property (readonly, nonatomic) NSUUID *hashtagUUID;
@property (readonly, nonatomic) BOOL active;

+ (id)hashtagItemWithQueryItem:(id)a0 sessionManager:(id)a1;

- (id)strokeColor;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)setActive:(BOOL)a0;
- (void)clearActiveInDrawing:(id)a0;
- (id)_baselinePath;
- (id)_actionNameForActivation:(BOOL)a0;
- (void)invalidateUUID;

@end
