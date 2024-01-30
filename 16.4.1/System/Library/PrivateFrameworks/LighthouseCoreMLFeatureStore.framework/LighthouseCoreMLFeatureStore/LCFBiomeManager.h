@class BMStream, BMSource;

@interface LCFBiomeManager : NSObject

@property (readonly, nonatomic) BMStream *biomeStream;
@property (retain, nonatomic) BMSource *biomeSource;

- (BOOL)writeData:(id)a0;
- (id)init:(id)a0;
- (void).cxx_destruct;
- (id)readData:(id)a0 endDate:(id)a1 reversed:(BOOL)a2;
- (id)readDataWithTimestamp:(id)a0 endDate:(id)a1 reversed:(BOOL)a2;
- (id)readTimeStamps:(id)a0 endDate:(id)a1 reversed:(BOOL)a2;

@end
