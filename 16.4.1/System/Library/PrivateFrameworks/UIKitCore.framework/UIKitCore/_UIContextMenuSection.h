@class NSString, NSUUID;

@interface _UIContextMenuSection : NSObject {
    NSUUID *_identifier;
}

@property (nonatomic) BOOL isRoot;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) long long preferredCellSize;
@property (readonly, nonatomic) unsigned long long preferredActionLineLimit;

+ (id)sectionWithMenu:(id)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;

@end
