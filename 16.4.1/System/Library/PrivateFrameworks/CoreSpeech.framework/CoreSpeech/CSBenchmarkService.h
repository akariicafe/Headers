@interface CSBenchmarkService : NSObject

+ (id)createBenchamrkXPCConnection;
+ (void)pingpong:(id)a0 completion:(id /* block */)a1;
+ (void)runAudioInjectionOnly:(id)a0 completion:(id /* block */)a1;
+ (void)runLstmPhsModelWithConfig:(id)a0 withUrl:(id)a1 withConfigRoot:(id)a2 completion:(id /* block */)a3;
+ (void)runNovDetectorWithConfig:(id)a0 configRoot:(id)a1 withUrl:(id)a2 completion:(id /* block */)a3;
+ (void)runODLDModelWithConfig:(id)a0 locale:(id)a1 inputText:(id)a2 completion:(id /* block */)a3;
+ (void)runOSDAnalyzerWithConfig:(id)a0 withUrl:(id)a1 completion:(id /* block */)a2;
+ (void)runVTSecondPassModelWithConfig:(id)a0 locale:(id)a1 withUrl:(id)a2 completion:(id /* block */)a3;

@end
