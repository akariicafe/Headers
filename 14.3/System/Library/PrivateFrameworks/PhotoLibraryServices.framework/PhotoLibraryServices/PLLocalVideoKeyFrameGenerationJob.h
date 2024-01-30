@class NSString, NSManagedObjectID;

@interface PLLocalVideoKeyFrameGenerationJob : NSObject

@property (retain, nonatomic) NSManagedObjectID *assetObjectID;
@property (nonatomic) BOOL networkAccessAllowed;
@property (copy, nonatomic) NSString *libraryID;
@property (copy, nonatomic) id /* block */ completionHandler;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqualToJob:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
