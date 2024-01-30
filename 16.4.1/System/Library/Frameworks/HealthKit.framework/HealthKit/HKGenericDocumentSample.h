@class NSString, NSData, NSFileHandle;

@interface HKGenericDocumentSample : HKDocumentSample {
    NSFileHandle *_fileHandle;
}

@property (readonly, copy) NSString *title;
@property (readonly, copy) NSString *extension;
@property (readonly, copy) NSData *thumbnailData;

+ (id)documentSampleWithTitle:(id)a0 fileHandle:(id)a1 date:(id)a2 metadata:(id)a3;

- (void).cxx_destruct;

@end
