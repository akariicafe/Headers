@class NSString;

@interface _ACCMediaLibraryAccessoryPendingUpdateItem : NSObject

@property (readonly, nonatomic) NSString *libraryUID;
@property (readonly, nonatomic) NSString *revision;
@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) id item;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)dealloc;
- (id)initWithLibrary:(id)a0 revision:(id)a1 type:(int)a2 item:(id)a3;

@end
