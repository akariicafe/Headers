@class NSMutableData, NSString;
@protocol SHDataStream;

@interface SHJSONLDataDetokenizer : NSObject <SHDataStream>

@property (retain, nonatomic) NSMutableData *currentData;
@property (copy, nonatomic) id /* block */ tap;
@property (retain, nonatomic) id<SHDataStream> next;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)closeWithError:(id *)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)processData:(id)a0 error:(id *)a1;
- (BOOL)writeDataToTap:(id)a0 withError:(id *)a1;

@end
