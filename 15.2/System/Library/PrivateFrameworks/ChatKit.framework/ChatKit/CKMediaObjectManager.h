@class NSArray, NSDictionary, NSMutableDictionary;

@interface CKMediaObjectManager : NSObject

@property (copy, nonatomic) NSArray *classes;
@property (copy, nonatomic) NSDictionary *UTITypes;
@property (copy, nonatomic) NSDictionary *dynTypes;
@property (retain, nonatomic) NSMutableDictionary *transfers;

+ (id)sharedInstance;

- (id)fileManager;
- (void)transferRemoved:(id)a0;
- (id)UTITypeForExtension:(id)a0;
- (id)transferWithTransferGUID:(id)a0 imMessage:(id)a1;
- (id)transferWithFileURL:(id)a0 transcoderUserInfo:(id)a1 attributionInfo:(id)a2 hideAttachment:(BOOL)a3;
- (Class)transferClass;
- (id)mediaObjectWithFileURL:(id)a0 filename:(id)a1 transcoderUserInfo:(id)a2 attributionInfo:(id)a3 hideAttachment:(BOOL)a4;
- (id)transferWithStickerFileURL:(id)a0 transferUserInfo:(id)a1 attributionInfo:(id)a2;
- (id)UTITypeForFilename:(id)a0;
- (id)allUTITypes;
- (Class)classForUTIType:(id)a0;
- (id)mediaObjectWithData:(id)a0 UTIType:(id)a1 filename:(id)a2 transcoderUserInfo:(id)a3;
- (id)mediaObjectWithFileURL:(id)a0 filename:(id)a1 transcoderUserInfo:(id)a2;
- (id)mediaObjectWithTransferGUID:(id)a0 imMessage:(id)a1 chatContext:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (id)mediaObjectWithTransferGUID:(id)a0 imMessage:(id)a1;
- (id)mediaObjectWithSticker:(id)a0 stickerUserInfo:(id)a1;
- (void)dealloc;
- (Class)classForFilename:(id)a0;

@end
