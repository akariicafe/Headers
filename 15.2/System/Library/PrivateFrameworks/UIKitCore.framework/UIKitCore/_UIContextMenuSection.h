@class NSUUID;

@interface _UIContextMenuSection : NSObject {
    NSUUID *_identifier;
}

@property (readonly, nonatomic) BOOL isCompact;
@property (readonly, nonatomic) unsigned long long preferredActionLineLimit;

+ (id)sectionWithMenu:(id)a0;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
