@class NSUUID;

@interface _UIContextMenuActionsListSection : NSObject {
    NSUUID *_identifier;
}

@property (readonly, nonatomic) BOOL isCompact;
@property (readonly, nonatomic) BOOL prefersSingleLineActions;

+ (id)sectionWithMenu:(id)a0;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
