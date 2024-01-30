@interface IMTranscoderTelemetry : NSObject {
    unsigned char _signpostId;
}

- (id)init;
- (void)emitSignpostNoTranscodeFromUTI:(id)a0;
- (void)_emitSignpostPreviewGenerationRange:(long long)a0 begin:(BOOL)a1;
- (void)_emitSignpostTranscodeRange:(long long)a0 begin:(BOOL)a1;
- (long long)_telemetryImageTypeForUTI:(id)a0;
- (void)emitPreviewGenerationBeginFromUTI:(id)a0;
- (void)emitPreviewGenerationEndFromUTI:(id)a0;
- (void)emitSignpostTranscodeFinalForDestinationUTI:(id)a0;
- (void)emitSignpostTranscodeSkipSourceUTI:(id)a0;
- (void)emitSignpostTranscodeStepForDestinationUTI:(id)a0;
- (void)emitTranscodeBeginFromUTI:(id)a0;
- (void)emitTranscodeEndFromUTI:(id)a0;

@end
