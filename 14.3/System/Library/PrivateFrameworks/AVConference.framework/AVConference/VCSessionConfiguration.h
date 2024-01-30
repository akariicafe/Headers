@class NSObject;
@protocol NSCopying;

@interface VCSessionConfiguration : NSObject

@property (nonatomic) long long sessionMode;
@property (retain, nonatomic) NSObject<NSCopying> *reportingHierarchyToken;
@property (nonatomic, getter=isOneToOneModeEnabled) BOOL oneToOneModeEnabled;

- (id)init;
- (void)dealloc;
- (BOOL)applyConfigurationUsingClientDict:(id)a0;
- (id)initWithClientDictionary:(id)a0;
- (BOOL)updateWithClientDictionary:(id)a0;

@end
