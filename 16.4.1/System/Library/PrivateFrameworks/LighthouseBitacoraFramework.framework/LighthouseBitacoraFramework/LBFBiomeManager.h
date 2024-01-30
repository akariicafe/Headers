@class BMStream, BMSource;

@interface LBFBiomeManager : NSObject

@property (readonly, nonatomic) BMStream *biomeStream;
@property (retain, nonatomic) BMSource *biomeSource;

- (BOOL)writeData:(id)a0;
- (id)init:(id)a0;
- (void).cxx_destruct;
- (BOOL)enumerateData:(id)a0 endDate:(id)a1 reversed:(BOOL)a2 shouldContinue:(id /* block */)a3;
- (id)readData:(id)a0 endDate:(id)a1;

@end
