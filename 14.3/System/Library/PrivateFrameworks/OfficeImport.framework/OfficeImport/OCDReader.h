@class NSString, NSData, NSError;
@protocol OCDReaderDelegate, TCCancelDelegate;

@interface OCDReader : NSObject

@property (retain, nonatomic) NSString *fileName;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSError *startError;
@property (retain, nonatomic) id<TCCancelDelegate> cancelDelegate;
@property (weak, nonatomic) id<OCDReaderDelegate> delegate;
@property (nonatomic) BOOL isThumbnail;

- (void).cxx_destruct;
- (id)read;
- (BOOL)start;
- (id)initWithCancelDelegate:(id)a0;
- (BOOL)isBinaryReader;
- (BOOL)verifyFileFormat;
- (void)setStartErrorMessageFromException:(id)a0;

@end
