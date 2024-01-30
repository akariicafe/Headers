@class NSString, NSDictionary;

@interface _MFFlagChangeEntry : NSObject

@property (readonly) NSString *path;
@property (readonly) unsigned int uid;
@property (readonly) NSDictionary *changes;
@property double commitTime;
@property unsigned int connectionTag;

- (void)dealloc;
- (id)initWithPath:(id)a0 UID:(unsigned int)a1 changes:(id)a2;

@end
