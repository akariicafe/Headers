@class NSMutableSet;

@interface CoreDAVACLItem : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *accessControlEntities;

+ (id)copyParseRules;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)addACE:(id)a0;
- (id)liveACEs;
- (id)notGrantedSubsetOfACEs:(id)a0;

@end
