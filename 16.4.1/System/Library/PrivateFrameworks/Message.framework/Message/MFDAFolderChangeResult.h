@class NSError, NSString;

@interface MFDAFolderChangeResult : NSObject

@property (readonly) long long statusCode;
@property (readonly) NSError *error;
@property (readonly) NSString *folderID;
@property (readonly) NSString *folderName;

- (BOOL)wasSuccessful;
- (id)description;
- (void).cxx_destruct;
- (id)initWithStatusCode:(long long)a0 error:(id)a1 folderID:(id)a2 folderName:(id)a3;

@end
